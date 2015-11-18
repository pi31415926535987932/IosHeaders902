/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:16:00 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, AVPlayerItemDelegate, NSObjectNSCopying;
#import <AVFoundation/AVFoundation-Structs.h>
@class NSURL, NSObject, AVWeakReference, AVPropertyStorage, NSArray, AVAsset, NSMutableArray, NSMutableDictionary, AVAudioMix, AVPlayerItem, AVPlayerConnection, NSDate, AVVideoComposition, AVCustomVideoCompositorSession, NSDictionary, NSString, NSError;

@interface AVPlayerItemInternal : NSObject {

	NSURL* URL;
	NSObject*<OS_dispatch_queue> ivarAccessQueue;
	AVWeakReference* weakReference;
	AVPropertyStorage* propertyStorage;
	NSObject*<OS_dispatch_queue> figConfigurationQueue;
	NSObject*<OS_dispatch_queue> seekQueue;
	OpaqueFigSimpleMutexRef seekIDMutex;
	OpaqueVTPixelBufferAttributesMediatorRef pixelBufferAttributeMediator;
	OpaqueCMTimebaseRef proxyTimebase;
	NSArray* automaticallyLoadedAssetKeys;
	char wasInitializedWithURL;
	AVAsset* asset;
	OpaqueFigPlaybackItemRef figPlaybackItem;
	NSObject*<OS_dispatch_queue> stateDispatchQueue;
	NSArray* cachedTracks;
	NSMutableArray* syncLayers;
	NSArray* itemOutputs;
	NSMutableArray* itemVideoOutputs;
	NSMutableDictionary* itemLegibleOutputsForKeys;
	NSMutableDictionary* itemMetadataOutputsForKeys;
	char suppressesVideoLayers;
	OpaqueCMTimebaseRef figTimebase;
	char didBecomeReadyForInspectionOfTracks;
	char didBecomeReadyForInspectionOfPresentationSize;
	AVAsset* assetWithFigPlaybackItem;
	NSArray* trackIDsForAssetWithFigPlaybackItem;
	char needTimedMetadataNotification;
	char didBecomeReadyForBasicInspection;
	id<AVPlayerItemDelegate> delegate;
	AVAudioMix* audioMix;
	char needToSeekAfterCreatingFigPlaybackItem;
	SCD_Struct_CM5 initialTime;
	unsigned initialSetTimeFlags;
	SCD_Struct_CM5 initialMinSnapTime;
	SCD_Struct_CM5 initialMaxSnapTime;
	unsigned nextSeekIDToGenerate;
	int pendingSeekID;
	/*^block*/id seekCompletionHandler;
	AVPlayerItem* previousItem;
	AVPlayerItem* nextItem;
	AVPlayerConnection* playerConnection;
	char initialLimitReadAhead;
	char allowsExtendedReadAhead;
	int initialPlaybackLikelyToKeepUpTrigger;
	char initialWillNeverSeekBackwardsHint;
	char initialAlwaysMonitorsPlayability;
	char nonForcedSubtitlesEnabled;
	char externalProtectionRequested;
	char savesDownloadedDataToDiskWhenDone;
	NSDate* initialDate;
	NSDate* initialEstimatedDate;
	SCD_Struct_CM5 forwardPlaybackEndTime;
	SCD_Struct_CM5 reversePlaybackEndTime;
	NSArray* imageQueueInterpolationCurve;
	char imageQueueInterpolationCurveWasSet;
	char blendsVideoFrames;
	char blendsVideoFramesWasSet;
	char reversesMoreVideoFramesInMemory;
	char reversesMoreVideoFramesInMemoryWasSet;
	char aggressivelyCachesVideoFrames;
	char aggressivelyCachesVideoFramesWasSet;
	char initialContinuesPlayingDuringPrerollForSeek;
	char initialContinuesPlayingDuringPrerollForRateChange;
	char usesIFrameOnlyPlaybackForHighRateScaledEditsWasSet;
	char usesIFrameOnlyPlaybackForHighRateScaledEdits;
	SCD_Struct_CM5 minimumIntervalForIFrameOnlyPlayback;
	char minimumIntervalForIFrameOnlyPlaybackWasSet;
	float speedThresholdForIFrameOnlyPlayback;
	char speedThresholdForIFrameOnlyPlaybackWasSet;
	AVVideoComposition* videoComposition;
	AVWeakReference* clientsOriginalVideoComposition;
	AVCustomVideoCompositorSession* customVideoCompositorSession;
	void* figVideoCompositor;
	char seekingWaitsForVideoCompositionRendering;
	NSDictionary* gaplessInfo;
	int eqPreset;
	NSDictionary* rampInOutInfo;
	NSDictionary* audibleDRMInfo;
	float soundCheckVolumeNormalization;
	float volumeAdjustment;
	int initialVariantIndex;
	CFStringRef initialFigTimePitchAlgorithm;
	NSMutableDictionary* mediaOptionsSelectedByClient;
	NSArray* textStyleRules;
	NSString* mediaKind;
	unsigned restrictions;
	NSString* serviceIdentifier;
	char networkUsuallyExceedsMaxBitRate;
	char allowProgressiveSwitchUp;
	CGSize IFramePrefetchTargetDimensions;
	double preferredPeakBitRate;
	SCD_Struct_CM5 maximumTrailingBufferDuration;
	SCD_Struct_CM5 maximumForwardBufferDuration;
	char requiresAccessLog;
	unsigned RTCReportingFlags;
	int status;
	NSError* error;
	NSArray* timedMetadata;
	NSMutableArray* handlersToCallWhenReadyForEnqueueing;
	char haveInitialSamples;
	char haveCPEProtector;
	char didBecomeReadyForInspectionOfMediaSelectionOptions;
	char didBecomeReadyForInspectionOfDuration;
	char didInformObserversAboutAvailabilityOfTracks;
	char didFireKVOForAssetForNonStreamingItem;
	char usesMinimalLatencyForVideoCompositionRendering;
	AVAudioMix* mostRecentlyAppliedAudioMix;
	id<NSObject><NSCopying> AVKitData;
	char canUseExtraNetworking;
	AVWeakReference* playerReference;
	char didSetAssetToAssetWithFigPlaybackItem;
	OpaqueFigCPEProtectorRef figCPEProtector;

}
@end

