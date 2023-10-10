using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using UnityEngine;


[IncludeInSettings(true)]
public class Connect_To_Client : Unit
{
    [DoNotSerialize]
    public ValueInput brokerAddressInput { get; private set; }

    [DoNotSerialize]
    public ControlInput inputFlow { get; private set; }

    [DoNotSerialize]
    public ControlOutput outputFlow { get; private set; }

    protected override void Definition()
    {
        brokerAddressInput = ValueInput<string>("brokerAddress", "");
        inputFlow = ControlInput("inputFlow", Trigger);
        outputFlow = ControlOutput("outputFlow");

        Succession(inputFlow, outputFlow);
        Requirement(brokerAddressInput, inputFlow);
    }

    public ControlOutput Trigger(Flow flow)
    {
        string brokerAddress = flow.GetValue<string>(brokerAddressInput);

        GameObject mqtt_Object = GameObject.FindWithTag("client");
        if (mqtt_Object != null)
        {
            MQTT_Client mqttClient = mqtt_Object.GetComponent<MQTT_Client>();

            if (mqttClient != null)
            {
               
                
                mqttClient.SetBrokerAddress(brokerAddress);
                mqttClient.ChangeDebugText("Trying to connect to " + mqttClient.brokerAddress + "at Port " + mqttClient.brokerPort);
                mqttClient.TryConnection();
                Debug.Log("Broker address set to: " + mqttClient.brokerAddress);
                mqttClient.TestPublish();
            }
        }

        return outputFlow;
    }
}
