# Kinematics and Dynamics Library

[![CI](https://github.com/orocos/orocos_kinematics_dynamics/workflows/CI/badge.svg)](https://github.com/orocos/orocos_kinematics_dynamics/actions)

# Install for QF

## Ubuntu 20.04
```
git submodule update --init
cd orocos_kdl
mkdir build
cd build
cmake -DCMAKE_BUILD_TYPE=Release ..
make
sudo make install
sudo ldconfig
cd ../../python_orocos_kdl
mkdir build
cd build
export ROS_PYTHON_VERSION=3
cmake -DCMAKE_BUILD_TYPE=Release ..
make
sudo make install
sudo ldconfig
```

---

Orocos project to supply RealTime usable kinematics and dynamics code,
it contains code for rigid body kinematics calculations and
representations for kinematic structures and their inverse and forward
kinematic solvers.

The C++ library is located in the `orocos_kdl` folder. The installation instructions can be found in
[INSTALL.md](orocos_kdl/INSTALL.md).

The python bindings, are located in the `python_orocos_kdl` folder. The installation instructions can be found in
[INSTALL.md](python_orocos_kdl/INSTALL.md).

