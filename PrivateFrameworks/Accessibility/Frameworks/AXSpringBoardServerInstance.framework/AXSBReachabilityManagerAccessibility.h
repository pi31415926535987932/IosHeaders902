/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:48 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXSpringBoardServerInstance.framework/AXSpringBoardServerInstance
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AXSpringBoardServerInstance/__AXSBReachabilityManagerAccessibility_super.h>

@interface AXSBReachabilityManagerAccessibility : __AXSBReachabilityManagerAccessibility_super
+(Class)safeCategoryBaseClass;
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
-(void)_notifyObserversReachabilityModeActive:(char)arg1 excludingObserver:(id)arg2 ;
-(char)_axReachabilityEnabled;
-(id)_axDictionaryOfAnimationProperties;
-(id)_axReachabilitySettings;
-(void)_axSendReachabilityToggledActionWithPayload:(id)arg1 ;
-(void)_axAddReachabilityProperty:(id)arg1 toDictionary:(id)arg2 ;
-(void)_setKeepAliveTimer;
@end

