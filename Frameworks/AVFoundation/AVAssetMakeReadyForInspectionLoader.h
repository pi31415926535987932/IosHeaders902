/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:16:02 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetInspectorLoader.h>

@class AVAssetInspector, NSMutableArray, NSURL;

@interface AVAssetMakeReadyForInspectionLoader : AVAssetInspectorLoader {

	AVAssetInspector* _assetInspector;
	OpaqueFigFormatReaderRef _formatReader;
	OpaqueFigSimpleMutexRef _loadingMutex;
	NSMutableArray* _keysAwaitingCompletion;
	int _status;
	long _basicInspectionFailureCode;
	NSURL* _URL;

}
-(void)cancelLoading;
-(OpaqueFigPlaybackItemRef)_playbackItem;
-(void)_serverHasDied;
-(char)isExportable;
-(char)isComposable;
-(OpaqueFigFormatReaderRef)_formatReader;
-(id)figChapterGroupInfo;
-(id)assetInspector;
-(void)_setStatus:(int)arg1 figErrorCode:(long)arg2 ;
-(OpaqueFigFormatReaderRef)_copyFormatReaderFromFigObjectWithFigErrorCode:(int*)arg1 ;
-(id)_dictionaryOfSpecialGettersForKeyValueStatus;
-(int)_statusOfValueWhileMutexLockedForKey:(id)arg1 error:(id*)arg2 ;
-(char)_statusOfValuesIsTerminalWhileMutexLockedForKeys:(id)arg1 ;
-(char)_inspectionRequiresAFormatReader;
-(char)_updateStatusWhileMutexLocked:(int)arg1 figErrorCode:(long)arg2 ;
-(id)_getAndPruneCompletionsWhileMutexLocked;
-(id)_dictionaryOfSpecialLoadingMethodsForKeys;
-(id)_loadValuesUsingDefaultLoadingMethodWhileMutexLockedForKeys:(id)arg1 ;
-(id)_loadValuesWhileMutexLockedForKeys:(id)arg1 ;
-(OpaqueFigSimpleMutexRef)_loadingMutex;
-(char)_providesAccurateTiming;
-(id)_statusOfValueForKeyThatIsAlwaysLoaded;
-(id)lyrics;
-(char)_isStreaming;
-(char)hasProtectedContent;
-(int)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(char)isPlayable;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(int)_status;
-(void)dealloc;
-(SCD_Struct_CM5)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(id)URL;
-(char)isReadable;
-(void)finalize;
@end
