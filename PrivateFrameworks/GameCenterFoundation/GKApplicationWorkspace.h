/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:18 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class LSApplicationWorkspace;

@interface GKApplicationWorkspace : NSObject {

	LSApplicationWorkspace* _lsWorkspace;

}

@property (nonatomic,retain) LSApplicationWorkspace * lsWorkspace;              //@synthesize lsWorkspace=_lsWorkspace - In the implementation block
+(id)defaultWorkspace;
-(void)dealloc;
-(id)applicationProxyForBundleID:(id)arg1 ;
-(void)setLsWorkspace:(LSApplicationWorkspace *)arg1 ;
-(id)gameDescriptorsWithInstalledBundleVersionsForBundleIDs:(id)arg1 ;
-(id)gameDescriptorsWithInstalledBundleVersionsForGameDescriptors:(id)arg1 ;
-(LSApplicationWorkspace *)lsWorkspace;
-(char)applicationIsInstalled:(id)arg1 ;
-(id)initWithWorkspace:(id)arg1 ;
-(void)openSettings;
-(void)openICloudSettings;
@end

