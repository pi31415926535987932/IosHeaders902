/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:42 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVLeafItem, NSMutableSet, NSDictionary, NSSet;

@interface CoreDAVBulkRequestsItem : CoreDAVItem {

	CoreDAVLeafItem* _maxResourcesItem;
	CoreDAVLeafItem* _maxSizeItem;
	NSMutableSet* _supportedItems;

}

@property (nonatomic,readonly) NSDictionary * dictRepresentation; 
@property (nonatomic,retain) CoreDAVLeafItem * maxResourcesItem;               //@synthesize maxResourcesItem=_maxResourcesItem - In the implementation block
@property (nonatomic,retain) CoreDAVLeafItem * maxSizeItem;                    //@synthesize maxSizeItem=_maxSizeItem - In the implementation block
@property (nonatomic,readonly) NSSet * supportedItems;                         //@synthesize supportedItems=_supportedItems - In the implementation block
@property (nonatomic,readonly) int maxResources; 
@property (nonatomic,readonly) int maxSize; 
@property (nonatomic,readonly) char supportsInsert; 
@property (nonatomic,readonly) char supportsUpdate; 
@property (nonatomic,readonly) char supportsDelete; 
+(id)copyParseRules;
-(void)dealloc;
-(id)init;
-(id)description;
-(int)maxSize;
-(NSDictionary *)dictRepresentation;
-(int)maxResources;
-(void)setMaxResourcesItem:(CoreDAVLeafItem *)arg1 ;
-(void)setMaxSizeItem:(CoreDAVLeafItem *)arg1 ;
-(void)addSupportedItem:(id)arg1 ;
-(char)supportsInsert;
-(char)supportsUpdate;
-(char)supportsDelete;
-(char)supportsItemWithNameSpace:(id)arg1 name:(id)arg2 ;
-(CoreDAVLeafItem *)maxResourcesItem;
-(CoreDAVLeafItem *)maxSizeItem;
-(NSSet *)supportedItems;
@end

