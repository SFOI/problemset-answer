read -p "Site name (default as \"test\"): " projectName
if test -z "$projectName"; then
  projectName="test"
fi
echo $projectName
cp -r "./.empty" "./$projectName"
