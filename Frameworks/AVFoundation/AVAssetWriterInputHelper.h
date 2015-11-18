/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:16:01 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVAssetWriterInputConfigurationState, AVWeakReference, NSString, AVOutputSettings, NSArray, NSDictionary, AVAssetWriterInputPassDescription, NSURL;

@interface AVAssetWriterInputHelper : NSObject {

	AVAssetWriterInputConfigurationState* _configurationState;
	AVWeakReference* _weakReferenceToAssetWriterInput;

}

@property (nonatomic,readonly) AVAssetWriterInputConfigurationState * configurationState;               //@synthesize configurationState=_configurationState - In the implementation block
@property (retain) AVWeakReference * weakReferenceToAssetWriterInput;                                   //@synthesize weakReferenceToAssetWriterInput=_weakReferenceToAssetWriterInput - In the implementation block
@property (nonatomic,readonly) int status; 
@property (nonatomic,readonly) int trackID; 
@property (nonatomic,readonly) NSString * mediaType; 
@property (nonatomic,readonly) AVOutputSettings * outputSettings; 
@property (nonatomic,readonly) opaqueCMFormatDescriptionRef sourceFormatHint; 
@property (assign,nonatomic) CGAffineTransform transform; 
@property (nonatomic,copy) NSArray * metadata; 
@property (assign,nonatomic) int mediaTimeScale; 
@property (getter=isReadyForMoreMediaData,nonatomic,readonly) char readyForMoreMediaData; 
@property (assign,nonatomic) char expectsMediaDataInRealTime; 
@property (assign,nonatomic) CGSize naturalSize; 
@property (nonatomic,copy) NSString * languageCode; 
@property (nonatomic,copy) NSString * extendedLanguageTag; 
@property (assign,nonatomic) char marksOutputTrackAsEnabled; 
@property (assign,nonatomic) float preferredVolume; 
@property (assign,nonatomic) int layer; 
@property (assign,nonatomic) short alternateGroupID; 
@property (nonatomic,readonly) NSDictionary * trackReferences; 
@property (assign,nonatomic) char performsMultiPassEncodingIfSupported; 
@property (nonatomic,readonly) char canPerformMultiplePasses; 
@property (nonatomic,readonly) AVAssetWriterInputPassDescription * currentPassDescription; 
@property (nonatomic,readonly) char shouldRespondToInitialPassDescription; 
@property (assign,nonatomic) SCD_Struct_CM5 preferredMediaChunkDuration; 
@property (assign,nonatomic) int preferredMediaChunkAlignment; 
@property (assign,nonatomic) int preferredMediaChunkSize; 
@property (nonatomic,copy) NSURL * sampleReferenceBaseURL; 
@property (nonatomic,copy) NSDictionary * sourcePixelBufferAttributes; 
@property (nonatomic,readonly) CVPixelBufferPoolRef pixelBufferPool; 
-(void)setExtendedLanguageTag:(NSString *)arg1 ;
-(float)preferredVolume;
-(short)alternateGroupID;
-(id)availableTrackAssociationTypes;
-(void)setNaturalSize:(CGSize)arg1 ;
-(void)setPreferredVolume:(float)arg1 ;
-(void)setAlternateGroupID:(short)arg1 ;
-(id)initWithConfigurationState:(id)arg1 ;
-(AVAssetWriterInputConfigurationState *)configurationState;
-(opaqueCMFormatDescriptionRef)sourceFormatHint;
-(void)setMarksOutputTrackAsEnabled:(char)arg1 ;
-(char)expectsMediaDataInRealTime;
-(char)marksOutputTrackAsEnabled;
-(NSDictionary *)sourcePixelBufferAttributes;
-(void)setSourcePixelBufferAttributes:(NSDictionary *)arg1 ;
-(int)mediaTimeScale;
-(void)setMediaTimeScale:(int)arg1 ;
-(void)setExpectsMediaDataInRealTime:(char)arg1 ;
-(char)performsMultiPassEncodingIfSupported;
-(void)setPerformsMultiPassEncodingIfSupported:(char)arg1 ;
-(SCD_Struct_CM5)preferredMediaChunkDuration;
-(void)setPreferredMediaChunkDuration:(SCD_Struct_CM5)arg1 ;
-(int)preferredMediaChunkAlignment;
-(void)setPreferredMediaChunkAlignment:(int)arg1 ;
-(int)preferredMediaChunkSize;
-(void)setPreferredMediaChunkSize:(int)arg1 ;
-(NSURL *)sampleReferenceBaseURL;
-(void)setSampleReferenceBaseURL:(NSURL *)arg1 ;
-(void)setWeakReferenceToAssetWriterInput:(AVWeakReference *)arg1 ;
-(void)didStartInitialSession;
-(void)prepareToEndSession;
-(char)prepareToFinishWritingReturningError:(id*)arg1 ;
-(id)transitionToAndReturnTerminalHelperWithTerminalStatus:(int)arg1 ;
-(char)canPerformMultiplePasses;
-(AVAssetWriterInputPassDescription *)currentPassDescription;
-(char)canStartRespondingToEachPassDescriptionReturningReason:(id*)arg1 ;
-(char)shouldRespondToInitialPassDescription;
-(int)appendSampleBuffer:(opaqueCMSampleBufferRef)arg1 error:(id*)arg2 ;
-(void)markCurrentPassAsFinished;
-(char)canAddTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2 ;
-(void)addTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2 ;
-(id)associatedInputsWithTrackAssociationType:(id)arg1 ;
-(AVWeakReference *)weakReferenceToAssetWriterInput;
-(void)transitionAssetWriterAndAllInputsToFailedStatusWithError:(id)arg1 ;
-(int)trackID;
-(NSDictionary *)trackReferences;
-(NSString *)extendedLanguageTag;
-(NSString *)mediaType;
-(int)layer;
-(void)dealloc;
-(id)description;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(void)setLayer:(int)arg1 ;
-(CGAffineTransform)transform;
-(NSString *)languageCode;
-(CGSize)naturalSize;
-(int)status;
-(AVOutputSettings *)outputSettings;
-(char)isReadyForMoreMediaData;
-(void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(CVPixelBufferPoolRef)pixelBufferPool;
-(void)markAsFinished;
-(char)appendPixelBuffer:(CVBufferRef)arg1 withPresentationTime:(SCD_Struct_CM5)arg2 ;
-(void)setLanguageCode:(NSString *)arg1 ;
-(void)setMetadata:(NSArray *)arg1 ;
-(NSArray *)metadata;
@end
