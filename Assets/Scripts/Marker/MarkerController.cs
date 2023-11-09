using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class MarkerController : MonoBehaviour
{
    public ARTrackedImageManager imageManager;
    public Texture2D testImage;

    bool DoesSupportMutableImageLibraries()
    {
        return imageManager.descriptor.supportsMutableLibrary;
    }

    public void createImageInDatabase(Texture2D image, float size, string name)
    {
        var library = (MutableRuntimeReferenceImageLibrary)imageManager.CreateRuntimeLibrary();
        imageManager.referenceLibrary = library;
        if (imageManager.referenceLibrary is MutableRuntimeReferenceImageLibrary mutableLibrary)
        {
                mutableLibrary.ScheduleAddImageWithValidationJob(
                image,
                name,
                size);
        }
    }

    public Transform getTransformOfMarker(string name)
    {
        foreach (var trackedImage in imageManager.trackables)
        {
            if (trackedImage.referenceImage.name.Equals(name))
            {
                return trackedImage.transform;
            }
        }
        return null;
    }
}
