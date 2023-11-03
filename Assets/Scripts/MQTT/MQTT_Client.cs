using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using uPLibrary.Networking.M2Mqtt;
using uPLibrary.Networking.M2Mqtt.Messages;
using M2MqttUnity;
using UnityEngine.Events;
using TMPro;
using Unity.VisualScripting;


public class MQTT_Client : M2MqttUnityClient
{
    [System.Serializable]
    public class MQTTMessageEvent : UnityEvent<string> { }
    public MQTTMessageEvent onMessageReceived;

    private TextMeshProUGUI topic_debug;
    private TextMeshProUGUI message_debug;

    public GameObject debugObject;

    [Tooltip("Set the topic to subscribe. !!!ATTENTION!!! multi-level wildcard # subscribes to all topics")]
    public string topicSubscribe = "Unity_Test/licht";

    public void TestPublish()
    {
        client.Publish("M2MQTT_Unity/test", System.Text.Encoding.UTF8.GetBytes("Test message"), MqttMsgBase.QOS_LEVEL_EXACTLY_ONCE, false);
        Debug.Log("Test message published");
        
    }

    public void PublishMessage(string topic, string message)
    {
        client.Publish(topic, System.Text.Encoding.UTF8.GetBytes(message), MqttMsgBase.QOS_LEVEL_EXACTLY_ONCE, false);
    }

   

    void Start()
    {
        //debugObject = GameObject.FindWithTag("debug_v2");
        ChangeDebugText("Testing");

        //base.Connect();
        //onMessageReceived.AddListener(debugging);
    }

    void Update()
    {
        base.Update();
    }

    public void TryConnection()
    {
        
       base.Connect();
        
    }

    protected override void SubscribeTopics()
    {
        client.Subscribe(new string[] { topicSubscribe }, new byte[] { MqttMsgBase.QOS_LEVEL_EXACTLY_ONCE });
    }

    public void SubscribeToTopic(string topic)
    {
        client.Subscribe(new string[] { topic }, new byte[] { MqttMsgBase.QOS_LEVEL_EXACTLY_ONCE });
    }

    protected override void UnsubscribeTopics()
    {
        client.Unsubscribe(new string[] { topicSubscribe });
    }

    public void SetBrokerAddress(string brokerAddress)
    {
        
        this.brokerAddress = brokerAddress;
    }

    public void ChangeDebugText(string text)
    {
        if (debugObject != null)
        {
            TextMeshProUGUI tmp = debugObject.GetComponent<TextMeshProUGUI>();
            if (tmp != null)
            {
                tmp.text = text;
            }
            else
            {
                Debug.LogError("TextMeshProUGUI component not found on the 'debug' GameObject.");
            }
        }
        else
        {
            Debug.LogError("No GameObject found with the 'debug' tag.");
        }
    }

    public void debugging(string message)
    {
        ChangeDebugText(message);
    }

    public void simulate_mqtt_message()
    {
        topic_debug = GameObject.FindWithTag("Topic_debug").GetComponent<TextMeshProUGUI>();
        message_debug = GameObject.FindWithTag("Message_debug").GetComponent<TextMeshProUGUI>();
        Debug.Log("Debug objects: " + topic_debug + message_debug);
        string topic_debug_string = topic_debug.text;
        string message_debug_string = message_debug.text;
        List<string> debug_MQTT = new List<string>();
        debug_MQTT.Add(topic_debug_string);
        debug_MQTT.Add(message_debug_string);
        EventBus.Trigger(EventNames.Topic_of_Message, debug_MQTT);
    }



    public void TrySubscribe(string topicToSubscribe)
    {
        topicSubscribe = topicToSubscribe;
        SubscribeTopics();
    }

   /* void OnMessageReceived(string newMessage)
    {
        Debug.Log("on message received test");
        onMessageReceived.Invoke(newMessage);
    }
   */
    /*
    protected override void DecodeMessage(string topic, byte[] message)
    {
        base.DecodeMessage(topic, string);
        Debug.Log("This is the overridden method in DerivedClass.");
    }
    */
}

