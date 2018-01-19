using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Shooter : MonoBehaviour {
    
    public GameObject bulletPrefab;
    public float bulletSpeed = 5.0f;
    AudioSource launchAudio; 

    // Use this for initialization
    void Start()
    {
        launchAudio = GetComponent<AudioSource>();
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Space))
        {
            launchAudio.Play();

            GameObject instance = Instantiate(bulletPrefab);
            instance.transform.position = transform.position;
            Rigidbody rb = instance.GetComponent<Rigidbody>();
            Camera camera = GetComponentInChildren<Camera>();
            rb.velocity = camera.transform.rotation * Vector3.forward * bulletSpeed;
        }
    }
}
