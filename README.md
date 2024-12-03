# Using Inja

You need
- Visual Studio Community
- cget or some other package manager
- ninja for Windows

Get the inja package using cget: `cget install pantor/inja`

(Tried 3.4.0 but there was a build error, looked like it was fixed in the HEAD. Got HEAD instead)

Default cget installs into its own directory, <userdir>/cget. Use that for
the CMAKE_PREFIX_PATH.

Got it working for MSVC after reading this:

https://ryandeangraham.medium.com/building-a-header-only-library-hello-world-f9dd05ac1066

I had the setup slightly wrong. Fixed by doing find_package with inja, and linkin with pantor::inja.

For building 64-bit Windows apps with clang-cl, CMAKE_PREFIX_PATH seems not to work.
I had to set inja_DIR.

The 64-bit compiler and linker for clang are on the path.
For me that path entry is

C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\Llvm\x64\bin

## WSL2

cget seems not to work on WSL2. It writes a message saying it cannot handle UNC paths
and tries to use MSVC, instead of detecting gcc as the default compiler.

Handle this by building and installing packages from source into the cget location.
