using UnityEngine;
using System.Collections;

public class PlayerController : MonoBehaviour {

	public float speed;
	public float turningSpeed;
	public Rigidbody ship;
	public string playerNumber;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void FixedUpdate () {
		//Thrust Amount
		float thrust = Input.GetAxis ("Vertical" + playerNumber);
		float turn = Input.GetAxis ("Horizontal" + playerNumber);

		if(thrust != 0){
			ship.transform.position += ship.transform.forward * thrust * speed;
		}

		if (turn != 0) {
			ship.transform.Rotate (0, turn * turningSpeed, 0);
		}
	}
}
