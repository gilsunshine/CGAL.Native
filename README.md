# CGAL.Native

This is an implementation of the tutorial found [here](https://www.youtube.com/watch?v=1-QXBM0VjbY) for MacOS. Xcode is used to compile a .dylib (dynamic library) as an alternative to the .dll compiled in VSCode in the tutorial. You will need to have CGAL installed locally. If you have homebrew installed you can simply ```brew install cgal``` from a terminal.

Some things I learned that may help you if it is your first time using XCode as it was for me. Some of these issues and solutions may be specific to my setup:
* Under the CGAL.Native target **Build Settings** tab, you will need to update ```Header Search Paths``` and ```Library Search Paths``` so your library can find your local install of CGAL. On Apple Silicon these paths are ```/opt/homebrew/include``` and ```/opt/homebrew/lib``` respectively. On computers with Intel chips I believe the paths are ```/usr/local/include``` and ```/usr/local/lib``` but I'm not able to verify that.
* CGAL was looking for “Eigen” but when installed via homebrew Eigen ends up in an “eigen3” folder. These terminal prompts created aliases that allowed CGAL to find Eigen:
```
sudo ln -sf eigen3/Eigen Eigen
sudo ln -sf eigen3/unsupported unsupported
```
* Under the CGAL.Native target **Build Phases** you need to add your .h files to ```Headers``` and your .cpp files to ```Compile Sources```.
* Also under the CGAL.Native target **Build Phases** tab gmp has to be manually added to ```Link Binary With Libraries```.
* I experienced what I believe are caching issues in XCode. I would intentionally add errors and the code would still compile. Delete the DerivedData folder if weird things are happening.
* If you compile for debug, the .dylib will work but the oriented bounding box calculation will be quite slow. To compile for release, go to Product > Scheme > Edit Scheme and change the build configuration to release. In build settings I changed the optimization setting to -Os (or maybe that was the default), which greatly reduces the size of the binary.
