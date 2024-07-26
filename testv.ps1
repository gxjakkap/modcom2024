$name=$args[0]
$src = $args[1]

if (!$name -or !$src){
    throw "Invalid Parameter!"
}


$compileCommand = "./cm `"$name`" $src"    
Invoke-Expression -Command $compileCommand -ErrorAction Stop

$testCommand = "py _test/test.py `"bin/$($name)_$($src)`" 1"    
Invoke-Expression -Command $testCommand