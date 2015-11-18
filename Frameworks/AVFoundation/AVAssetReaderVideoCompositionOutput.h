/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:16:00 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVAssetReaderOutput.h>

@class AVAssetReaderVideoCompositionOutputInternal, NSArray, NSDictionary, AVVideoComposition;

@interface AVAssetReaderVideoCompositionOutput : AVAssetReaderOutput {

	AVAssetReaderVideoCompositionOutputInternal* _videoCompositionOutputInternal;

}

@property (nonatomic,readonly) NSArray * videoTracks; 
@property (nonatomic,readonly) NSDictionary * videoSettings; 
@property (nonatomic,copy) AVVideoComposition * videoComposition; 
@property (nonatomic,readonly) id<AVVideoCompositing> customVideoCompositor; 
+(id)assetReaderVideoCompositionOutputWithVideoTracks:(id)arg1 videoSettings:(id)arg2 ;
-(AVVideoComposition *)videoComposition;
-(void)_setVideoComposition:(id)arg1 customVideoCompositorSession:(id)arg2 ;
-(void)setVideoComposition:(AVVideoComposition *)arg1 ;
-(id<AVVideoCompositing>)customVideoCompositor;
-(id)_errorForOSStatus:(long)arg1 ;
-(char)_prepareForReadingReturningError:(id*)arg1 ;
-(char)alwaysCopiesSampleData;
-(char)_enableTrackExtractionReturningError:(id*)arg1 ;
-(NSArray *)videoTracks;
-(id)initWithVideoTracks:(id)arg1 videoSettings:(id)arg2 ;
-(void)_setVideoComposition:(id)arg1 ;
-(id)mediaType;
-(id)_asset;
-(void)dealloc;
-(id)init;
-(id)description;
-(NSDictionary *)videoSettings;
-(void)finalize;
@end

