$name=$args[0]
$src = $args[1]

$dir = "./$src"

if (!$name -or !$src){
    throw "Invalid Parameter!"
}


if (-not (Test-Path -Path "./bin/$($name)_$($src).exe")){
    $compileCommand = "./cm `"$name`" $src"    
    Invoke-Expression -Command $compileCommand -ErrorAction Stop
}

$testCommand = "py _test/test.py `"bin/$($name)_$($src)`""    
Invoke-Expression -Command $testCommand