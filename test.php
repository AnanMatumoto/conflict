<?php
function AddSum($a,$b){
 return $a + $b;
}
$sum = AddSum(1,2);

echo "sum = $sum<br>";

class TestClass{

  public $m_Val;
  
  public function PrintInfo(){
   echo "TestClass<br>";
  }
}
 $test = new TestClass();
 $test->PrintInfo();
 
 class Robot{
 
    public $m_Name ="Robot";
 
    function __construct(){
    
       echo "Robot:Construct<br>";
    }
    
     /*デストラクタが走るタイミングは
     プログラムが終了する瞬間、または参照カウンタが０になった時*/
    	
    function __destruct(){
       echo"Robot:Destruct<br>";
    }
 
	public function PrintInfo(){
		///メンバ変数にアクセスするには「$this」が絶対必要
		echo "MyName is $this->m_Name<br>";
	}
 
 }
 $robot = new Robot();
 $robot->PrintInfo();

 

 ?>