using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using UnityEngine;


[IncludeInSettings(true)]
public class PublishMessage : Unit
{
    [DoNotSerialize]
    public ValueInput topicInput { get; private set; }

    [DoNotSerialize]
    public ValueInput messageInput { get; private set; }

    [DoNotSerialize]
    public ControlInput inputFlow { get; private set; }

    [DoNotSerialize]
    public ControlOutput outputFlow { get; private set; }

    protected override void Definition()
    {
        topicInput = ValueInput<string>("Topic", "");
        messageInput = ValueInput<string>("Message", "");
        inputFlow = ControlInput("inputFlow", Trigger);
        outputFlow = ControlOutput("outputFlow");

        Succession(inputFlow, outputFlow);
        Requirement(topicInput, inputFlow);
        Requirement(messageInput, inputFlow);
    }

    public ControlOutput Trigger(Flow flow)
    {
        string topic = flow.GetValue<string>(topicInput);
        string message = flow.GetValue<string>(messageInput);

        GameObject mqtt_Object = GameObject.FindWithTag("client");
        if (mqtt_Object != null)
        {
            MQTT_Client mqttClient = mqtt_Object.GetComponent<MQTT_Client>();

            if (mqttClient != null)
            {

                mqttClient.PublishMessage(topic, message);
            }
        }

        return outputFlow;
    }
}
