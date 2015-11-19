/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:48 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/SpeakThisServices.framework/SpeakThisServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpeakThisServices/SpeakThisServices-Structs.h>
#import <libobjc.A.dylib/AXUIClientDelegate.h>

@class AXUIClient, NSString;

@interface SpeakThisServices : NSObject <AXUIClientDelegate> {

	AXUIClient* _client;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)_sendMessage:(id)arg1 withIdentifier:(unsigned)arg2 errorHandler:(/*^block*/id)arg3 ;
-(id)_clientIdentifier;
-(void)_sendMessageWithIdentifier:(unsigned)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg1 ;
-(id)_descriptionForMessageIdentifier:(unsigned)arg1 ;
-(id)_descriptionForErrorCode:(int)arg1 ;
-(void)speakThisWithOptions:(int)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)speakThisWithOptions:(int)arg1 useAppAtPoint:(CGPoint)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)toggleSpeaking:(/*^block*/id)arg1 ;
-(void)speakFaster:(/*^block*/id)arg1 ;
-(void)speakSlower:(/*^block*/id)arg1 ;
-(void)fastForward:(/*^block*/id)arg1 ;
-(void)pauseSpeaking:(/*^block*/id)arg1 ;
-(void)resumeSpeaking:(/*^block*/id)arg1 ;
-(void)rewind:(/*^block*/id)arg1 ;
-(id)_client;
@end

