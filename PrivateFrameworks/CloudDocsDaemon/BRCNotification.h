/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:29 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <CloudDocs/BRQueryItem.h>

@class BRCItemID, NSSet, NSMutableSet, BRCLocalContainer, NSString, NSNumber, NSURL;

@interface BRCNotification : BRQueryItem {

	BRCItemID* _itemID;
	BRCItemID* _parentID;
	NSSet* _parentIDs;
	NSMutableSet* _containerIDsWithReverseAliases;
	BRCLocalContainer* _container;
	NSString* _aliasContainerID;
	NSString* _unsaltedBookmarkData;
	unsigned long long _oldParentFileID;
	unsigned long long _parentFileID;

}

@property (nonatomic,readonly) BRCLocalContainer * container;                            //@synthesize container=_container - In the implementation block
@property (nonatomic,readonly) NSString * aliasContainerID;                              //@synthesize aliasContainerID=_aliasContainerID - In the implementation block
@property (nonatomic,readonly) BRCItemID * itemID;                                       //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,readonly) BRCItemID * parentID;                                     //@synthesize parentID=_parentID - In the implementation block
@property (nonatomic,readonly) unsigned long long oldParentFileID;                       //@synthesize oldParentFileID=_oldParentFileID - In the implementation block
@property (nonatomic,readonly) unsigned long long parentFileID;                          //@synthesize parentFileID=_parentFileID - In the implementation block
@property (nonatomic,readonly) NSNumber * oldParentFileObjectID; 
@property (nonatomic,readonly) NSNumber * parentFileObjectID; 
@property (nonatomic,retain) NSSet * parentIDs;                                          //@synthesize parentIDs=_parentIDs - In the implementation block
@property (nonatomic,retain) NSMutableSet * containerIDsWithReverseAliases;              //@synthesize containerIDsWithReverseAliases=_containerIDsWithReverseAliases - In the implementation block
@property (nonatomic,retain) NSString * unsaltedBookmarkData;                            //@synthesize unsaltedBookmarkData=_unsaltedBookmarkData - In the implementation block
@property (nonatomic,readonly) NSURL * url; 
+(char)supportsSecureCoding;
+(id)notificationGatheredFromItem:(id)arg1 ;
+(id)notificationWithAliasItem:(id)arg1 targetItemNotification:(id)arg2 ;
-(BRCItemID *)itemID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(BRCLocalContainer *)container;
-(BRCItemID *)parentID;
-(unsigned long long)parentFileID;
-(id)initWithAliasItem:(id)arg1 itemDiffs:(unsigned long long)arg2 ;
-(id)initWithLocalItem:(id)arg1 itemDiffs:(unsigned long long)arg2 ;
-(void)_addAliasDecoration:(id)arg1 ;
-(id)subclassDescription;
-(NSNumber *)oldParentFileObjectID;
-(NSNumber *)parentFileObjectID;
-(id)notificationByStrippingSharingInfoIfNeeded;
-(char)canMerge:(id)arg1 ;
-(void)generateLogicalExtension:(id)arg1 physicalExtension:(id)arg2 ;
-(unsigned long long)oldParentFileID;
-(NSSet *)parentIDs;
-(void)setParentIDs:(NSSet *)arg1 ;
-(NSMutableSet *)containerIDsWithReverseAliases;
-(void)setContainerIDsWithReverseAliases:(NSMutableSet *)arg1 ;
-(NSString *)aliasContainerID;
-(NSString *)unsaltedBookmarkData;
-(void)setUnsaltedBookmarkData:(NSString *)arg1 ;
-(void)merge:(id)arg1 ;
@end

