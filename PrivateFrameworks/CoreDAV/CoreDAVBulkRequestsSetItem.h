/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:42 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVBulkRequestsItem, NSDictionary;

@interface CoreDAVBulkRequestsSetItem : CoreDAVItem {

	CoreDAVBulkRequestsItem* _crudItem;
	CoreDAVBulkRequestsItem* _simpleItem;

}

@property (nonatomic,readonly) NSDictionary * dictRepresentation; 
@property (nonatomic,retain) CoreDAVBulkRequestsItem * crudItem;                //@synthesize crudItem=_crudItem - In the implementation block
@property (nonatomic,retain) CoreDAVBulkRequestsItem * simpleItem;              //@synthesize simpleItem=_simpleItem - In the implementation block
+(id)copyParseRules;
-(void)dealloc;
-(id)init;
-(id)description;
-(NSDictionary *)dictRepresentation;
-(CoreDAVBulkRequestsItem *)crudItem;
-(CoreDAVBulkRequestsItem *)simpleItem;
-(void)setCrudItem:(CoreDAVBulkRequestsItem *)arg1 ;
-(void)setSimpleItem:(CoreDAVBulkRequestsItem *)arg1 ;
@end

