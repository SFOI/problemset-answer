read -p "Project name (default as \"test\"): " projectName
if test -z "$projectName"; then
  projectName="test"
fi
echo $projectName
cp -r "./.empty" "./$projectName"

cd "./$projectName"
mv "empty.anjuta" "$projectName.anjuta"
sed -i "s/empty/$projectName/g" "./configure.ac" "./src/Makefile.am"

anjuta "./$projectName.anjuta"
