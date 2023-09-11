<?php
require_once "Base.php";

class Project extends Base
{ // Init Project

    public $result = [
        [0, 0, 0, 0],
        [0, 0, 0, 0],
        [0, 0, 0, 0],
        [0, 0, 0, 0],
    ];
    public $top = [ 4, 3, 2, 1 ];
    public $down = [ 1, 2, 2, 4 ];
    public $left = [ 4, 3, 2, 1 ];
    public $right = [ 1, 2, 2, 4 ];

    public function __construct()
    {

        if($this->initProject())
            $this->printResult($this->result);
        else
            print "Error\n";
    }

    public function initProject()
    {

        $this->defaultGenerate();
        //$this->random_game();
        //$this->checkResult();

        return 1;
    }

    public function defaultGenerate()
    {
        $this->generateTop();
        $this->generateLeft();
        $this->generateBottom();
        $this->generateRigth();

    }

    public function generateTop()
    {
        /** Check os valores 4 */
        for($row=0; $row<4; $row++)
            if($this->top[$row] == 4)
                for($col=0; $col<4; $col++)
                    if($this->result[$col][$row] == 0)
                        $this->result[$col][$row] = $col +1;
    }

    public function generateLeft()
    {
        /** Check os valores 4 */
        for($row=0; $row<4; $row++)
            if($this->left[$row] == 4)
                for($col=0; $col<4; $col++)
                    if($this->result[$row][$col] == 0)
                        $this->result[$row][$col] = $col + 1;

    }

    public function generateBottom()
    {
        /** Check os valores 4 */
        for($row=0; $row<4; $row++)
            if($this->down[$row] == 4)
                for($col=0; $col>4; $col++){
                    //if($this->result[$col][$row] == 0)
                    $this->result[$col][$row] = $col + 1;
                }
    }

    public function generateRigth()
    {

    }

    public function random_game()
    {
        $i = 0;
        while ($i < 4)
        {
            $j = 0;
            while ($j < 4)
            {
                if($this->result[$i][$j] != 0){
                    $this->result[$i][$j] = rand(1,4);;
                    $j++;
                }
            }
            $i++;
        }
    }

    public function checkResult()
    {



    }


    public function checkRow()
    {

    }

    public function checkCollum()
    {

    }



































} // End Project