/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:50 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSHashTable;

@interface SBUIKeyboardEnablementManager : NSObject {

	NSHashTable* _disabledContexts;
	char _disabled;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)disableAutomaticAppearanceForContext:(id)arg1 ;
-(void)enableAutomaticAppearanceForContext:(id)arg1 ;
@end

