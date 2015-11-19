/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:12 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TextToSpeech/TextToSpeech-Structs.h>
#import <libobjc.A.dylib/TTSSpeechRequestDelegate.h>

@protocol TTSSpeechConnectionDelegate, TTSSpeechService;
@class TTSSpeechRequest, NSString;

@interface TTSSpeechRequestOwner : NSObject <TTSSpeechRequestDelegate> {

	id<TTSSpeechConnectionDelegate> _delegate;
	TTSSpeechRequest* _request;
	id<TTSSpeechService> _speechService;

}

@property (assign,nonatomic,__weak) id<TTSSpeechConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) TTSSpeechRequest * request;                                 //@synthesize request=_request - In the implementation block
@property (assign,nonatomic,__weak) id<TTSSpeechService> speechService;                    //@synthesize speechService=_speechService - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setRequest:(id)arg1 ;
-(void)setDelegate:(id<TTSSpeechConnectionDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<TTSSpeechConnectionDelegate>)delegate;
-(TTSSpeechRequest *)request;
-(oneway void)speechRequestDidStart:(id)arg1 forService:(id)arg2 ;
-(oneway void)speechRequestDidPause:(id)arg1 forService:(id)arg2 ;
-(oneway void)speechRequestDidContinue:(id)arg1 forService:(id)arg2 ;
-(oneway void)speechRequest:(id)arg1 withMark:(int)arg2 didStartForRange:(NSRange)arg3 forService:(id)arg4 ;
-(oneway void)speechRequest:(id)arg1 didStopWithSuccess:(char)arg2 phonemesSpoken:(id)arg3 forService:(id)arg4 error:(id)arg5 ;
-(id)initWithSpeechService:(id)arg1 ;
-(void)stopCurrentSpeechRequestAtMark:(int)arg1 waitUntilStopped:(char)arg2 ;
-(void)pauseCurrentSpeechRequestAtMark:(int)arg1 waitUntilPaused:(char)arg2 ;
-(void)setSpeechService:(id<TTSSpeechService>)arg1 ;
-(id<TTSSpeechService>)speechService;
-(id)availableVoicesForLanguageCode:(id)arg1 ;
-(char)isSystemSpeaking;
-(void)startSpeechRequest:(id)arg1 ;
-(void)continueCurrentSpeechRequest;
-(char)isSystemSpeakingOnBehalfOfCurrentConnection;
@end

