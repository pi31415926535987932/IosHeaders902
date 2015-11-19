/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:57 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMTranscoding.framework/XPCServices/IMTranscoderAgent.xpc/IMTranscoderAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMTranscoderAgent/IMTranscoder.h>

@interface IMTranscoder_AV : IMTranscoder
+(id)supportedUTIs;
-(int)shouldTranscodeTransfer:(id)arg1 transcoderUserInfo:(id)arg2 target:(int)arg3 utiType:(id)arg4 allowUnfilteredUTIs:(id)arg5 fileSizeLimit:(unsigned long)arg6 ;
-(void)_transcodeVideoAsync:(id)arg1 target:(int)arg2 maxBytes:(unsigned long)arg3 userInfo:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)transcodeFileTransfer:(id)arg1 utiType:(id)arg2 allowUnfilteredUTIs:(id)arg3 target:(int)arg4 highQualityMaxByteSize:(unsigned long)arg5 lowQualityMaxByteSize:(unsigned long)arg6 maxDimension:(unsigned long)arg7 transcoderUserInfo:(id)arg8 representations:(int)arg9 completionBlock:(/*^block*/id)arg10 ;
@end

