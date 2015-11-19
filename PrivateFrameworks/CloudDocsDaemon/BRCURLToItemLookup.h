/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:29 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class BRCAccountSession, BRCRelativePath, NSURL, BRCItemID, NSString, BRCLocalItem, BRCServerItem, BRCDocumentItem;

@interface BRCURLToItemLookup : NSObject <NSSecureCoding> {

	BRCAccountSession* _session;
	SCD_Union_BR7 _hasFetched;
	BRCRelativePath* __relpath;
	NSURL* _url;
	BRCRelativePath* _parentRelpath;
	BRCItemID* _parentItemID;
	NSString* _filename;
	BRCLocalItem* _byIDLocalItem;
	BRCServerItem* _byIDServerItem;
	BRCLocalItem* _byPathLocalItem;
	BRCServerItem* _byPathServerItem;
	BRCDocumentItem* _faultedLocalItem;
	BRCServerItem* _faultedServerItem;
	BRCRelativePath* _faultedRelpath;
	BRCLocalItem* _reservedLocalItem;
	BRCServerItem* _reservedServerItem;
	unsigned long long _byIDDiffs;
	unsigned long long _byPathDiffs;
	unsigned long long _faultedDiffs;

}

@property (nonatomic,readonly) NSURL * url;                                             //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) SCD_Struct_BR8 byIDMatch; 
@property (nonatomic,readonly) BRCLocalItem * byIDLocalItem;                            //@synthesize byIDLocalItem=_byIDLocalItem - In the implementation block
@property (nonatomic,readonly) BRCServerItem * byIDServerItem;                          //@synthesize byIDServerItem=_byIDServerItem - In the implementation block
@property (nonatomic,readonly) BRCRelativePath * byIDRelpath; 
@property (nonatomic,readonly) unsigned long long byIDDiffs;                            //@synthesize byIDDiffs=_byIDDiffs - In the implementation block
@property (nonatomic,readonly) SCD_Struct_BR8 byPathMatch; 
@property (nonatomic,readonly) BRCLocalItem * byPathLocalItem;                          //@synthesize byPathLocalItem=_byPathLocalItem - In the implementation block
@property (nonatomic,readonly) BRCServerItem * byPathServerItem;                        //@synthesize byPathServerItem=_byPathServerItem - In the implementation block
@property (nonatomic,readonly) BRCRelativePath * byPathRelpath; 
@property (nonatomic,readonly) unsigned long long byPathDiffs;                          //@synthesize byPathDiffs=_byPathDiffs - In the implementation block
@property (nonatomic,readonly) SCD_Struct_BR8 faultedMatch; 
@property (nonatomic,readonly) BRCDocumentItem * faultedLocalItem;                      //@synthesize faultedLocalItem=_faultedLocalItem - In the implementation block
@property (nonatomic,readonly) BRCServerItem * faultedServerItem;                       //@synthesize faultedServerItem=_faultedServerItem - In the implementation block
@property (nonatomic,readonly) BRCRelativePath * faultedRelpath;                        //@synthesize faultedRelpath=_faultedRelpath - In the implementation block
@property (nonatomic,readonly) unsigned long long faultedDiffs;                         //@synthesize faultedDiffs=_faultedDiffs - In the implementation block
@property (nonatomic,readonly) SCD_Struct_BR8 reservedMatch; 
@property (nonatomic,readonly) BRCLocalItem * reservedLocalItem;                        //@synthesize reservedLocalItem=_reservedLocalItem - In the implementation block
@property (nonatomic,readonly) BRCServerItem * reservedServerItem;                      //@synthesize reservedServerItem=_reservedServerItem - In the implementation block
@property (nonatomic,readonly) BRCRelativePath * parentRelpath;                         //@synthesize parentRelpath=_parentRelpath - In the implementation block
@property (nonatomic,readonly) BRCItemID * parentItemID;                                //@synthesize parentItemID=_parentItemID - In the implementation block
@property (nonatomic,readonly) NSString * filename;                                     //@synthesize filename=_filename - In the implementation block
@property (nonatomic,readonly) unsigned short pathType; 
@property (nonatomic,readonly) BRCDocumentItem * bySharedEnclosureDocItem; 
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSURL *)url;
-(void)closePaths;
-(id)initWithURL:(id)arg1 root:(id)arg2 ;
-(char)resolveParentAndKeepOpenMustExist:(char)arg1 errcode:(int*)arg2 ;
-(void)_fetchRelPath;
-(BRCItemID *)parentItemID;
-(id)_relpath;
-(void)refreshByPathDiffs;
-(void)_fetchPathMatch;
-(void)refreshByIDDiffs;
-(void)_fetchIDMatch;
-(void)_fetchFaultedPathMatch;
-(void)refreshFaultedDiffs;
-(void)_fetchReservedPathMatch;
-(SCD_Struct_BR8)byPathMatch;
-(BRCLocalItem *)byPathLocalItem;
-(BRCRelativePath *)byPathRelpath;
-(BRCServerItem *)byPathServerItem;
-(unsigned long long)byPathDiffs;
-(void)clearByPathItem;
-(SCD_Struct_BR8)byIDMatch;
-(BRCLocalItem *)byIDLocalItem;
-(BRCRelativePath *)byIDRelpath;
-(BRCServerItem *)byIDServerItem;
-(unsigned long long)byIDDiffs;
-(void)clearByIDItem;
-(SCD_Struct_BR8)faultedMatch;
-(BRCRelativePath *)faultedRelpath;
-(BRCServerItem *)faultedServerItem;
-(BRCDocumentItem *)faultedLocalItem;
-(unsigned long long)faultedDiffs;
-(void)clearFaultedItem;
-(unsigned short)pathType;
-(BRCDocumentItem *)bySharedEnclosureDocItem;
-(SCD_Struct_BR8)reservedMatch;
-(BRCLocalItem *)reservedLocalItem;
-(BRCServerItem *)reservedServerItem;
-(void)clearReservedItem;
-(BRCRelativePath *)parentRelpath;
-(void)markPathMatchLostIfLocationDoesntMatch:(SCD_Struct_BR8*)arg1 ;
-(void)handleReservedPathMatchesIfNeeded;
-(void)matchLookupItemsWithDisk;
-(char)_isPathMatchIdle:(const SCD_Struct_BR8*)arg1 ;
-(id)_generateGentleBounceForPathMatch:(const SCD_Struct_BR8*)arg1 dirfd:(int)arg2 ;
-(void)_clearNamespace:(unsigned char)arg1 ;
-(SCD_Struct_BR8)_pathMatchInNamespace:(unsigned char)arg1 ;
-(char)_canUpdatePathMatch:(const SCD_Struct_BR8*)arg1 hasAdditionsToApply:(char)arg2 ;
-(void)didApplyChangesAtPath:(id)arg1 filename:(id)arg2 li:(id)arg3 si:(id)arg4 ;
-(char)_bounceBouncesHiddenByFault:(id)arg1 ;
-(char)tryToDeleteItemInNamespace:(unsigned char)arg1 ;
-(void)_moveMissingItemAsideInNamespace:(unsigned char)arg1 ;
-(char)_bouncePathMatch:(const SCD_Struct_BR8*)arg1 toApplyServerItem:(id)arg2 ;
-(char)_removeDirectory:(id)arg1 atPath:(id)arg2 error:(id*)arg3 ;
-(void)tryToUpdateItemInNamespace:(unsigned char)arg1 withDstLookup:(id)arg2 ;
-(NSString *)filename;
@end

