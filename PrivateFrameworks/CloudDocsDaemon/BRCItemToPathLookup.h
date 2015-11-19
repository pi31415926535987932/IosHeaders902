/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:29 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
@class BRCLocalItem, BRCServerItem, BRCServerZone, BRCRelativePath, NSURL;

@interface BRCItemToPathLookup : NSObject {

	BRCLocalItem* _item;
	BRCServerItem* _serverItem;
	BRCServerZone* _serverZone;
	BRCRelativePath* _parentPath;
	BRCRelativePath* _matchByFileID;
	BRCRelativePath* _matchByDocumentID;
	BRCRelativePath* _matchByEnclosure;
	BRCRelativePath* _matchByPath;
	unsigned long long _parentFileID;
	char _fileSystemIDMayStillExist;
	char _cleanupFaults;
	SCD_Struct_BR5 _fetched;

}

@property (nonatomic,readonly) BRCRelativePath * byFileSystemID; 
@property (nonatomic,readonly) char fileSystemIDMayStillExist; 
@property (nonatomic,readonly) BRCRelativePath * parentPath; 
@property (nonatomic,readonly) BRCRelativePath * byPath; 
@property (nonatomic,readonly) NSURL * coordinatedWriteURL; 
@property (nonatomic,readonly) NSURL * coordinatedReadURL; 
+(id)_resolveEnclosureWithEnclosureFd:(int)arg1 serverZone:(id)arg2 expectedDocumentID:(unsigned)arg3 expectedFileName:(id)arg4 cleanupFaults:(char)arg5 ;
+(id)lookupForItem:(id)arg1 ;
+(id)lookupForServerItem:(id)arg1 cleanupFaults:(char)arg2 ;
+(id)resolveEnclosureWithPath:(id)arg1 cleanupFaults:(char)arg2 ;
-(void)dealloc;
-(id)description;
-(NSURL *)coordinatedWriteURL;
-(BRCRelativePath *)byFileSystemID;
-(void)closePaths;
-(char)_fetchByFileID;
-(char)_fetchByDocumentID;
-(char)_fetchByPath;
-(BRCRelativePath *)byPath;
-(id)initWithServerItem:(id)arg1 cleanupFaults:(char)arg2 ;
-(void)_fetchParent;
-(BRCRelativePath *)parentPath;
-(char)computeLogicalPath:(id*)arg1 physicalPath:(id*)arg2 isDirectory:(char*)arg3 ;
-(char)_fetchByEnclosure;
-(NSURL *)coordinatedReadURL;
-(char)fileSystemIDMayStillExist;
-(id)initWithItem:(id)arg1 ;
@end

