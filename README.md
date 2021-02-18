# SDKs for Theos


When installed on a Mac, Theos relies on Xcode pretty heavily. There are innumerable upsides to this approach, and Theos tends to Just Work™ on a Mac.

SDKs used to be one such benefit. Prior to Xcode 7.3 and iOS 9.3, Xcode came built-in with a nearly complete SDK. Thus, you could simply update Xcode and get access to the latest private frameworks. I missed this golden era by a year or two.

Since then, however, it appears we've been dealt a little karmic justice: the included SDKs only contain public frameworks, and must be patched; every time you update Xcode, you have to patch the latest SDK.


So, then, these are those patched SDKs I've had to make. 


In the near future, I'd like to make these into full SDKs; that is, using headers instead of tbds, so that I could just import the frameworks I need, rather than writing my own header files for each project. 

That would need to be automated, too - partially because I'm lazy, and partially as a future-proofed offering to the community :)


nota bene: the iOS 8.4 SDK is taken from Xcode 6.4. The 8.4.1 SDK is built using the 14.4 SDK as a base. You'll probably have issues with the latter if you aren't using a Mac.
