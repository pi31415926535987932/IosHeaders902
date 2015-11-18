/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:50 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBApplication.h>

@class SBBookmarkIcon, NSURL;

@interface SBWebApplication : SBApplication {

	SBBookmarkIcon* _bookmarkIcon;
	NSURL* _launchURL;

}

@property (nonatomic,retain) NSURL * launchURL;                          //@synthesize launchURL=_launchURL - In the implementation block
@property (nonatomic,retain) SBBookmarkIcon * bookmarkIcon; 
+(id)_webClipIdentifierFromWebAppIdentifier:(id)arg1 ;
+(id)_snapshotManifest;
+(id)_webAppIdentifierFromWebClipIdentifier:(id)arg1 ;
+(id)_snapshotDirectory;
+(id)_primaryWebAppInfo;
+(id)_dataContainerURL;
-(id)iconIdentifier;
-(id)sceneIdentifierForDisplay:(id)arg1 ;
-(id)_snapshotManifest;
-(void)refreshLaunchImagesInSnapshotManifestIfNeededWithInfoDictionary:(id)arg1 ;
-(char)isWebApplication;
-(Class)iconClass;
-(SBBookmarkIcon *)bookmarkIcon;
-(void)setBookmarkIcon:(SBBookmarkIcon *)arg1 ;
-(id)_customStartupImageForLaunchingOrientation:(int)arg1 ;
-(void)dealloc;
-(id)displayName;
-(id)sandboxPath;
-(void)setLaunchURL:(NSURL *)arg1 ;
-(NSURL *)launchURL;
@end

