/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:59 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@interface PLVideoTranscoder : NSObject
+(void)transcodeVideoWithObjectBuilder:(id)arg1 outputURL:(id)arg2 startTime:(SCD_Struct_PL11)arg3 endTime:(SCD_Struct_PL11)arg4 presetName:(id)arg5 outputFileType:(id)arg6 completionHandler:(/*^block*/id)arg7 ;
+(id)generatePosterFrameForVideoAtURL:(id)arg1 maxSize:(CGSize)arg2 error:(id*)arg3 ;
+(void)transcodeVideo:(id)arg1 outputURL:(id)arg2 startTime:(SCD_Struct_PL11)arg3 endTime:(SCD_Struct_PL11)arg4 presetName:(id)arg5 outputFileType:(id)arg6 completionHandler:(/*^block*/id)arg7 ;
+(id)generatePosterFrameForAVAsset:(id)arg1 maxSize:(CGSize)arg2 error:(id*)arg3 ;
+(id)exportPresetsCompatibleWithVideoAtURL:(id)arg1 ;
@end

