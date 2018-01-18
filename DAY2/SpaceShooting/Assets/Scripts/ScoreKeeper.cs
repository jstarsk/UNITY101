using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScoreKeeper : MonoBehaviour {

    int globalScore = 0;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    public void IncrementGlobalScore(int scoreValue)
    {
        globalScore += scoreValue;
        print("Score: " + globalScore);
    }
}
