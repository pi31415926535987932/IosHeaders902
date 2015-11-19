/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:05 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <libobjc.A.dylib/ConfigurableObjectProtocol.h>

@protocol OS_dispatch_source;
@class NSString, NSObject;

@interface KernelEventMonitor : NSObject <ConfigurableObjectProtocol> {

	NSString* _symptomName;
	int _nativeSocket;
	int _nativeSocket6;
	NSObject*<OS_dispatch_source> _kernelNotificationSource;
	NSObject*<OS_dispatch_source> _kernelNotificationSource6;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)configureClass:(id)arg1 ;
-(NSString *)description;
-(int)configureInstance:(id)arg1 ;
-(int)read:(id)arg1 returnedValues:(id)arg2 ;
-(void)_handleNetworkEvent:(kern_event_msg*)arg1 ;
-(void)_handleSocket:(int)arg1 ;
-(void)initListening;
@end

