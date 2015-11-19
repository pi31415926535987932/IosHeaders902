/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:35 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface _STVocabularyObserver : NSObject {

	id __observer;
	SEL __selector;
	NSString* __name;
	id __object;
	_STVocabularyObserver* __strongReferenceToSelf;

}

@property (assign,nonatomic,__weak) id _observer;                                         //@synthesize _observer=__observer - In the implementation block
@property (assign,nonatomic) SEL _selector;                                               //@synthesize _selector=__selector - In the implementation block
@property (nonatomic,copy) NSString * _name;                                              //@synthesize _name=__name - In the implementation block
@property (nonatomic,retain) id _object;                                                  //@synthesize _object=__object - In the implementation block
@property (nonatomic,retain) _STVocabularyObserver * _strongReferenceToSelf;              //@synthesize _strongReferenceToSelf=__strongReferenceToSelf - In the implementation block
-(void)dealloc;
-(NSString *)_name;
-(void)stopObserving;
-(void)_dispatchNotification:(id)arg1 ;
-(SEL)_selector;
-(id)_object;
-(void)set_strongReferenceToSelf:(_STVocabularyObserver *)arg1 ;
-(id)_initWithObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4 ;
-(void)_stopObservingIfPossible;
-(void)set_observer:(id)arg1 ;
-(void)set_selector:(SEL)arg1 ;
-(void)set_name:(NSString *)arg1 ;
-(void)set_object:(id)arg1 ;
-(_STVocabularyObserver *)_strongReferenceToSelf;
-(id)_observer;
@end

