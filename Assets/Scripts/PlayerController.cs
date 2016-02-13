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
	void LateUpdate () {
		//Thrust Amount
		float moveVertical = Input.GetAxis ("Vertical" + playerNumber);
		ship.transform.position += ship.transform.forward * moveVertical * speed;

		//Turning
		float turningAmount = Input.GetAxis ("Horizontal" + playerNumber);
		ship.transform.Rotate (0, turningAmount * turningSpeed, 0);
	}
}
