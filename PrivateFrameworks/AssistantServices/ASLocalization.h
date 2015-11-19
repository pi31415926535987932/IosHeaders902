/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:02 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistant_service
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSMutableDictionary;

@interface ASLocalization : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSString* _languageCode;
	NSMutableDictionary* _stringTables;

}
+(id)sharedLocalization;
-(void)_clearTableCache;
-(id)localizedStringForKey:(id)arg1 table:(id)arg2 bundle:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(id)_languageCode;
-(void)_languageCodeChanged;
@end
