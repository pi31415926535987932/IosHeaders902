/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:10 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/MSASPlatform.h>

@class NSString;

@interface MSASPlatformImplementation : NSObject <MSASPlatform>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)shouldLogAtLevel:(int)arg1 ;
-(void)logLevel:(int)arg1 personID:(id)arg2 albumGUID:(id)arg3 format:(id)arg4 ;
-(id)pathAlbumSharingDir;
-(char)shouldEnableNewFeatures;
-(Class)pluginClass;
-(id)personIDsEnabledForAlbumSharing;
-(char)personIDEnabledForAlbumSharing:(id)arg1 ;
-(char)MSASIsAllowedToTransferMetadata;
-(char)MSASIsAllowedToUploadAssets;
-(id)MMCSUploadSocketOptionsForPersonID:(id)arg1 ;
-(char)MSASPersonIDIsAllowedToDownloadAssets:(id)arg1 ;
-(id)MMCSDownloadSocketOptionsForPersonID:(id)arg1 ;
-(int)MMCSConcurrentConnectionsCount;
-(id)pushTokenForPersonID:(id)arg1 ;
-(id)baseSharingURLForPersonID:(id)arg1 ;
-(id)_accountForPersonID:(id)arg1 ;
-(char)personIDUsesProductionPushEnvironment:(id)arg1 ;
-(id)albumSharingDaemon;
-(char)deviceHasEnoughDiskSpaceRemainingToOperate;
@end

