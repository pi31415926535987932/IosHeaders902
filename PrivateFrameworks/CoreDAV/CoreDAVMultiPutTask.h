/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:42 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTask.h>

@class NSString, CoreDAVXMLData, NSMutableDictionary, NSDictionary;

@interface CoreDAVMultiPutTask : CoreDAVTask {

	NSString* _appSpecificNamespace;
	NSString* _appSpecificDataProp;
	NSString* _checkCTag;
	CoreDAVXMLData* _pushedData;
	char _validCTag;
	NSString* _nextCTag;
	NSMutableDictionary* _uuidToHREF;
	NSMutableDictionary* _hrefToETag;
	NSMutableDictionary* _uuidToErrorItems;
	NSMutableDictionary* _hrefToErrorItems;
	NSMutableDictionary* _uuidToStatus;
	NSMutableDictionary* _hrefToStatus;

}

@property (nonatomic,readonly) NSString * nextCTag;                          //@synthesize nextCTag=_nextCTag - In the implementation block
@property (nonatomic,readonly) NSDictionary * uuidToHREF;                    //@synthesize uuidToHREF=_uuidToHREF - In the implementation block
@property (nonatomic,readonly) NSDictionary * hrefToETag;                    //@synthesize hrefToETag=_hrefToETag - In the implementation block
@property (nonatomic,readonly) NSDictionary * uuidToStatus;                  //@synthesize uuidToStatus=_uuidToStatus - In the implementation block
@property (nonatomic,readonly) NSDictionary * hrefToStatus;                  //@synthesize hrefToStatus=_hrefToStatus - In the implementation block
@property (nonatomic,readonly) NSDictionary * uuidToErrorItems;              //@synthesize uuidToErrorItems=_uuidToErrorItems - In the implementation block
@property (nonatomic,readonly) NSDictionary * hrefToErrorItems;              //@synthesize hrefToErrorItems=_hrefToErrorItems - In the implementation block
-(void)dealloc;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)copyDefaultParserForContentType:(id)arg1 ;
-(id)initWithURL:(id)arg1 checkCTag:(id)arg2 uuidsToAddActions:(id)arg3 hrefsToModDeleteActions:(id)arg4 ;
-(void)fillOutDataWithUUIDsToAddActions:(id)arg1 hrefsToModDeleteActions:(id)arg2 ;
-(NSDictionary *)uuidToHREF;
-(NSDictionary *)hrefToETag;
-(NSString *)nextCTag;
-(id)httpMethod;
-(id)additionalHeaderValues;
-(NSDictionary *)uuidToErrorItems;
-(NSDictionary *)hrefToErrorItems;
-(NSDictionary *)uuidToStatus;
-(NSDictionary *)hrefToStatus;
-(id)requestBody;
@end

