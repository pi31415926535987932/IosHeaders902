/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:19:01 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>
#import <libobjc.A.dylib/MKSearchCompleterDelegate.h>
#import <libobjc.A.dylib/ABSearchOperationDelegate.h>

@protocol OS_dispatch_queue, EKUILocationSearchModelDelegate;
@class CLLocationManager, CLInUseAssertion, MKLocalSearchCompleter, EKStructuredLocation, NSOperationQueue, ABSearchOperation, CLGeocoder, MKLocalSearch, NSObject, EKEventStore, EKOccurrenceCacheLocationSearch, NSCharacterSet, NSMutableArray, NSMutableDictionary, NSArray, NSString;

@interface EKUILocationSearchModel : NSObject <CLLocationManagerDelegate, MKSearchCompleterDelegate, ABSearchOperationDelegate> {

	CLLocationManager* _locationManager;
	CLInUseAssertion* _locationAssertion;
	MKLocalSearchCompleter* _completer;
	EKStructuredLocation* _currentLocation;
	NSOperationQueue* _abSearchQueue;
	ABSearchOperation* _abSearchOperation;
	CLGeocoder* _geocoder;
	MKLocalSearch* _localSearch;
	NSObject*<OS_dispatch_queue> _recentsQueue;
	NSObject*<OS_dispatch_queue> _eventsQueue;
	EKEventStore* _eventStore;
	EKOccurrenceCacheLocationSearch* _eventsSearch;
	NSCharacterSet* _whitespaceAndNewlineCharacterSet;
	NSObject*<OS_dispatch_queue> _conferenceRoomProcessingQueue;
	NSOperationQueue* _conferenceRoomOperationQueue;
	NSMutableArray* _mutableConferenceRoomSearchResults;
	NSMutableDictionary* _conferenceRoomAddressesToConferenceRooms;
	NSMutableArray* _recentsSearchResults;
	NSMutableArray* _frequentsSearchResults;
	NSMutableArray* _eventsSearchResults;
	NSMutableArray* _contactsSearchResults;
	NSArray* _mapCompletionSearchResults;
	id<EKUILocationSearchModelDelegate> _delegate;

}

@property (nonatomic,retain) EKStructuredLocation * currentLocation;                    //@synthesize currentLocation=_currentLocation - In the implementation block
@property (nonatomic,readonly) NSArray * mapCompletionSearchResults;                    //@synthesize mapCompletionSearchResults=_mapCompletionSearchResults - In the implementation block
@property (nonatomic,readonly) NSArray * contactsSearchResults;                         //@synthesize contactsSearchResults=_contactsSearchResults - In the implementation block
@property (nonatomic,readonly) NSArray * recentsSearchResults;                          //@synthesize recentsSearchResults=_recentsSearchResults - In the implementation block
@property (nonatomic,readonly) NSArray * frequentsSearchResults;                        //@synthesize frequentsSearchResults=_frequentsSearchResults - In the implementation block
@property (nonatomic,readonly) NSArray * eventsSearchResults;                           //@synthesize eventsSearchResults=_eventsSearchResults - In the implementation block
@property (nonatomic,readonly) NSArray * conferenceRoomSearchResults; 
@property (assign,nonatomic) id<EKUILocationSearchModelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithEventStore:(id)arg1 ;
-(void)resetContactsSearchResults;
-(void)resetEventsSearchResults;
-(void)resetConferenceRoomSearchResults;
-(void)resetSearchResults:(char)arg1 ;
-(void)updateRecents:(id)arg1 ;
-(void)searchFrequentLocations:(id)arg1 ;
-(void)searchConferenceRooms:(id)arg1 ;
-(void)updateEventLocations:(id)arg1 ;
-(id)CLLocationForDictionary:(id)arg1 ;
-(void)dedupeResults;
-(void)_processDirectorySearchResultSet:(id)arg1 forOperation:(id)arg2 ;
-(void)_addDiscoveredConferenceRooms:(id)arg1 ;
-(void)_handleAvailabilityResults:(id)arg1 forOperation:(id)arg2 ;
-(id)dictionaryForCLLocation:(id)arg1 ;
-(void)addLocationToRecents:(id)arg1 addressString:(id)arg2 ;
-(void)searchOperation:(id)arg1 didFindMatches:(id)arg2 moreComing:(char)arg3 ;
-(void)getCurrentLocation;
-(void)beginSearchForTerm:(id)arg1 ;
-(NSArray *)conferenceRoomSearchResults;
-(void)selectMapSearchCompletion:(id)arg1 ;
-(void)selectLocation:(id)arg1 ;
-(void)selectCurrentLocation;
-(NSArray *)mapCompletionSearchResults;
-(NSArray *)contactsSearchResults;
-(NSArray *)recentsSearchResults;
-(NSArray *)frequentsSearchResults;
-(NSArray *)eventsSearchResults;
-(void)completerDidUpdateResults:(id)arg1 finished:(char)arg2 ;
-(void)stopUpdatingLocation;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)setDelegate:(id<EKUILocationSearchModelDelegate>)arg1 ;
-(void)dealloc;
-(id<EKUILocationSearchModelDelegate>)delegate;
-(EKStructuredLocation *)currentLocation;
-(void)setCurrentLocation:(EKStructuredLocation *)arg1 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)cancelSearch;
@end

