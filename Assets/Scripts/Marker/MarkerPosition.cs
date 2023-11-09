using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class MarkerPosition : Unit
{
    [DoNotSerialize]
    public ControlInput inputFlow { get; private set; }

    [DoNotSerialize]
    public ControlOutput outputFlow { get; private set; }

    [DoNotSerialize]
    public ValueInput name { get; private set; }

    [DoNotSerialize]
    public ValueOutput markerTransform { get; private set; }

    private Transform realTransform;


    protected override void Definition()
    {
        //Defining the Input port of the flow & Node Logic
        inputFlow = ControlInput("", NodeLogic);
        outputFlow = ControlOutput("");

        name = ValueInput<string>("Name", string.Empty);
        markerTransform = ValueOutput<Transform>("Transform", flow => realTransform);
    }

    private ControlOutput NodeLogic(Flow flow)
    {
        realTransform = GameObject.Find("Marker").GetComponent<MarkerController>().getTransformOfMarker(flow.GetValue<string>(name));
        return outputFlow;
    }

}

