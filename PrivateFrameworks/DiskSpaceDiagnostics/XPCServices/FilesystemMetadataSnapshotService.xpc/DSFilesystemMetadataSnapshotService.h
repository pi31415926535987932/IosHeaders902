/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:02 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DiskSpaceDiagnostics.framework/XPCServices/FilesystemMetadataSnapshotService.xpc/FilesystemMetadataSnapshotService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/DSFilesystemMetadataSnapshotting.h>

@class NSString;

@interface DSFilesystemMetadataSnapshotService : NSObject <DSFilesystemMetadataSnapshotting>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)deleteSnapshotDirectory:(id*)arg1 ;
-(void)saveFilesystemMetadataSnapshotWithReply:(/*^block*/id)arg1 ;
@end
