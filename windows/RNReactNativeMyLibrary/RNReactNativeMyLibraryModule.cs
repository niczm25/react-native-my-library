using ReactNative.Bridge;
using System;
using System.Collections.Generic;
using Windows.ApplicationModel.Core;
using Windows.UI.Core;

namespace React.Native.My.Library.RNReactNativeMyLibrary
{
    /// <summary>
    /// A module that allows JS to share data.
    /// </summary>
    class RNReactNativeMyLibraryModule : NativeModuleBase
    {
        /// <summary>
        /// Instantiates the <see cref="RNReactNativeMyLibraryModule"/>.
        /// </summary>
        internal RNReactNativeMyLibraryModule()
        {

        }

        /// <summary>
        /// The name of the native module.
        /// </summary>
        public override string Name
        {
            get
            {
                return "RNReactNativeMyLibrary";
            }
        }
    }
}
