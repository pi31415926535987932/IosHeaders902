/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:16:02 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVVideoCompositionInstruction.h>

@class NSArray, NSString;

@interface AVCoreImageFilterVideoCompositionInstruction : NSObject <AVVideoCompositionInstruction> {

	SCD_Struct_CM6 _timeRange;
	NSArray* _requiredSourceTrackIDs;
	/*^block*/id _handler;
	CGAffineTransform _sourceTrackPreferredTransform;

}

@property (assign,nonatomic) CGAffineTransform sourceTrackPreferredTransform;              //@synthesize sourceTrackPreferredTransform=_sourceTrackPreferredTransform - In the implementation block
@property (nonatomic,readonly) id handler;                                                 //@synthesize handler=_handler - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCD_Struct_CM6 timeRange;                                   //@synthesize timeRange=_timeRange - In the implementation block
@property (nonatomic,readonly) char enablePostProcessing; 
@property (nonatomic,readonly) char containsTweening; 
@property (nonatomic,readonly) NSArray * requiredSourceTrackIDs;                           //@synthesize requiredSourceTrackIDs=_requiredSourceTrackIDs - In the implementation block
@property (nonatomic,readonly) int passthroughTrackID; 
-(char)enablePostProcessing;
-(char)containsTweening;
-(NSArray *)requiredSourceTrackIDs;
-(int)passthroughTrackID;
-(id)initWithTimeRange:(SCD_Struct_CM6)arg1 sourceTrackIDs:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)setSourceTrackPreferredTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)sourceTrackPreferredTransform;
-(void)dealloc;
-(id)init;
-(id)handler;
-(SCD_Struct_CM6)timeRange;
@end

