if [ "$TRAVIS_PULL_REQUEST" == "false" ]; then
  echo -e "Starting to update gh-pages\n"

  #copy data we're interested in to other place
  # cp -R coverage $HOME/coverage
  # #go to home and setup git
  # cd $HOME
  git config --global user.email "travis@travis-ci.org"
  git config --global user.name "Travis"

  # #using token clone gh-pages branch
  git clone --quiet --branch=gh-pages https://${GH_TOKEN}@github.com/malber/SystemProofOfConcept  gh-pages > /dev/null
  echo ${GH_TOKEN}
  # #go into diractory and copy data we're interested in to that directory
  # cd gh-pages
#  cp -Rf lib/* gh-pages
  echo "A" >> gh-pages/test.txt




  # #add, commit and push files
  cd gh-pages
  git add -f .
  git commit -m "Travis build $TRAVIS_BUILD_NUMBER pushed to gh-pages"
  git push -fq origin gh-pages > /dev/null

  # echo -e "Done magic with coverage\n"
fi