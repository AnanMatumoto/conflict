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
    
     /*�f�X�g���N�^������^�C�~���O��
     �v���O�������I������u�ԁA�܂��͎Q�ƃJ�E���^���O�ɂȂ�����*/
    	
    function __destruct(){
       echo"Robot:Destruct<br>";
    }
 
	public function PrintInfo(){
		///�����o�ϐ��ɃA�N�Z�X����ɂ́u$this�v����ΕK�v
		echo "MyName is $this->m_Name<br>";
	}
 
 }
 $robot = new Robot();
 $robot->PrintInfo();

 

 ?>