<?php

class Base
{

    public function printResult($result)
    {
        $i = $j = 0;
        while ($i < 4)
        {
            $j = 0;
            while ($j < 4)
            {
                print($result[$i][$j]);
                if($j != 3)
                    print (" ");
                $j++;
            }
            print("\n");
            $i++;
        }
    }











}