using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class MarkerDetect : Unit
{
    [DoNotSerialize]
    public ControlInput inputFlow { get; private set; }

    [DoNotSerialize]
    public ControlOutput outputFlow { get; private set; }

    [DoNotSerialize]
    public ValueInput image { get; private set; }

    [DoNotSerialize]
    public ValueInput size { get; private set; }

    [DoNotSerialize]
    public ValueInput name { get; private set; }


    protected override void Definition()
    {
        //Defining the Input port of the flow & Node Logic
        inputFlow = ControlInput("", NodeLogic);
        outputFlow = ControlOutput("");

        image = ValueInput<Texture2D>("Marker");
        size = ValueInput<float>("Size", 0f);
        name = ValueInput<string>("Name", string.Empty);
    }

    private ControlOutput NodeLogic(Flow flow)
    {
        GameObject.Find("Marker").GetComponent<MarkerController>().createImageInDatabase(flow.GetValue<Texture2D>(image), flow.GetValue<float>(size), flow.GetValue<string>(name));
        return outputFlow;
    }

}

