using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class _SceneManager : MonoBehaviour {

    public int NextSceneToLoad;
    float timeNextLevel = 10.0f;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {


        //if (Input.GetKeyDown(KeyCode.S))
        //{
        //    SceneManager.LoadScene(NextSceneToLoad);
        //}

        timeNextLevel -= Time.deltaTime;

        if(timeNextLevel < 0.0f){
            LoadNextScene();
        }

	}

    public void LoadNextScene(){
        int currentIndexScene = SceneManager.GetActiveScene().buildIndex;
        SceneManager.LoadScene(currentIndexScene + 1);
    }

    public void LoadPreviousScene(){
        int currentIndexScene = SceneManager.GetActiveScene().buildIndex;
        SceneManager.LoadScene(currentIndexScene - 1);
    }


}
