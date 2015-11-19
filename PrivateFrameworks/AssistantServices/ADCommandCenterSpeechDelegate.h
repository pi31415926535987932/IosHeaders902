/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:03 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ADCommandCenterSpeechDelegate <NSObject>
@optional
-(void)adSpeechRecognizedStructuredResult:(id)arg1 usingSpeechModel:(id)arg2 sessionUUID:(id)arg3;
-(void)adSpeechDidFindVoiceSearchPartialResult:(id)arg1;
-(void)adSpeechDidFindVoiceSearchFinalResult:(id)arg1;
-(void)adAudioFileFinishedWriting:(id)arg1 error:(id)arg2 sessionUUID:(id)arg3;

@required
-(void)adSpeechRecordingDidFail:(id)arg1 sessionUUID:(id)arg2;
-(void)adSpeechRecognitionDidFail:(id)arg1 sessionUUID:(id)arg2;
-(void)adSpeechRecognized:(id)arg1 usingSpeechModel:(id)arg2 sessionUUID:(id)arg3;
-(void)adSpeechRecognizedPartialResult:(id)arg1 usingSpeechModel:(id)arg2;
-(char)adWaitingForAudioFile;
-(void)adSpeechRecordingDidEndWithSessionUUID:(id)arg1;
-(void)adSpeechRecordingWillBeginWithSessionUUID:(id)arg1;
-(void)adSpeechRecordingDidBeginOnAVRecordRoute:(id)arg1 sessionUUID:(id)arg2;
-(void)adSpeechRecordingDidChangeAVRecordRoute:(id)arg1 sessionUUID:(id)arg2;
-(void)adSpeechRecordingDidUpdateAveragePower:(float)arg1 peakPower:(float)arg2;
-(void)adSpeechRecordingDidCancelWithSessionUUID:(id)arg1;
-(void)adSpeechRecordingDidRecognizeTokens:(id)arg1 sessionUUID:(id)arg2;
-(void)adSpeechRecordingDidRecognizePhrases:(id)arg1 sessionUUID:(id)arg2;

@end

