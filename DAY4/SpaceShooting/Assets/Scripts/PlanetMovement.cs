using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlanetMovement : MonoBehaviour {

    float counter;
    float speed = 0.1f;

    public float Max = 450;
    public float Min = -35;

    float time = 7.0f;

	// Use this for initialization
	void Start () {
        
        counter = transform.position.y;
	}
	
	// Update is called once per frame
	void Update () {


        time -= Time.deltaTime;

        if (time < 0.0f)
        {
            counter--;
            transform.position = new Vector3(transform.position.x, counter * speed, transform.position.z);

        }
        else{
            counter++;
            transform.position = new Vector3(transform.position.x, counter * speed, transform.position.z);
 
        }
        print(time); 
	}
}
