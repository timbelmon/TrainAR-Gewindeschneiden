using Unity.VisualScripting;
using UnityEngine;
using System.Collections.Generic;

//Register a string name for your Custom Scripting Event to hook it to an Event. You can save this class in a separate file and add multiple Events to it as public static strings.
public static class EventNames
{
    public static string Topic_of_Message = "Topic_of_Message";
}

[UnitTitle("On Incoming Message")]//The Custom Scripting Event node to receive the Event. Add "On" to the node title as an Event naming convention.
[UnitCategory("Events")]//Set the path to find the node in the fuzzy finder as Events > My Events.
public class Topic_of_Message : EventUnit<List<string>>
{
    [DoNotSerialize]// No need to serialize ports.
    public ValueOutput topic { get; private set; } // The Event outputs to return when the Event is triggered.
    public ValueOutput message { get; private set; }

    protected override bool register => true;

    // Add an EventHook with the name of the Event to the list of Visual Scripting Events.
    public override EventHook GetHook(GraphReference reference)
    {
        return new EventHook(EventNames.Topic_of_Message);
    }
    protected override void Definition()
    {
        base.Definition();
        // Setting the value on our port.
        topic = ValueOutput<string>(nameof(topic));
        message = ValueOutput<string>(nameof(message));
    }
    // Setting the value on our port.
    protected override void AssignArguments(Flow flow, List<string> data)
    {
        if (data.Count > 1)
        {
            flow.SetValue(topic, data[0]);
            flow.SetValue(message, data[1]);
        }
    }
}