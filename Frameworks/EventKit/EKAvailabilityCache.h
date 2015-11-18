/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:18:45 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject, NSMutableDictionary;

@interface EKAvailabilityCache : NSObject {

	char _sourceIsInvalid;
	NSString* _accountID;
	char _sourceSupportsAvailabilityRequests;
	NSObject*<OS_dispatch_queue> _processingQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSMutableDictionary* _addressesToCachedSpanRanges;
	NSMutableDictionary* _ignoredEventIDsToAddressBasedCaches;

}
+(char)_isValidStartDate:(id)arg1 endDate:(id)arg2 ;
+(void)_logRequestElapsedTime:(double)arg1 forNumberOfAddresses:(unsigned)arg2 ;
+(id)_generateEventKitSpansFromDataAccessExpressSpans:(id)arg1 ;
+(int)_convertType:(int)arg1 ;
-(id)_dictionaryForIgnoredEventID:(id)arg1 ;
-(void)_handleResults:(id)arg1 resultsBlock:(/*^block*/id)arg2 ignoredEventID:(id)arg3 ;
-(id)requestAvailabilityBetweenStartDate:(id)arg1 endDate:(id)arg2 ignoredEventID:(id)arg3 addresses:(id)arg4 resultsBlock:(/*^block*/id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)cancelAvailabilityRequestWithID:(id)arg1 ;
-(id)initWithSource:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
@end

