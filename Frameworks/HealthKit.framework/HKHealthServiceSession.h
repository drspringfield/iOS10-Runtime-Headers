/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKHealthServiceSession : NSObject {
    id /* block */  _characteristicsHandler;
    NSArray * _interestedTransitoryKeys;
    NSLock * _propertyLock;
    HKHealthService * _service;
    id /* block */  _sessionHandler;
    unsigned long long  _sessionIdentifier;
    id /* block */  _transitoryDataHandler;
}

@property (nonatomic, copy) id /* block */ characteristicsHandler;
@property (retain) NSArray *interestedTransitoryKeys;
@property (nonatomic, retain) NSLock *propertyLock;
@property (nonatomic, readonly) HKHealthService *service;
@property (nonatomic, copy) id /* block */ sessionHandler;
@property (nonatomic) unsigned long long sessionIdentifier;
@property (copy) id /* block */ transitoryDataHandler;

- (void).cxx_destruct;
- (id /* block */)characteristicsHandler;
- (id)initWithService:(id)arg1;
- (id)interestedTransitoryKeys;
- (id)propertyLock;
- (id)service;
- (id /* block */)sessionHandler;
- (unsigned long long)sessionIdentifier;
- (void)setCharacteristicsHandler:(id /* block */)arg1;
- (void)setInterestedTransitoryKeys:(id)arg1;
- (void)setPropertyLock:(id)arg1;
- (void)setSessionHandler:(id /* block */)arg1;
- (void)setSessionIdentifier:(unsigned long long)arg1;
- (void)setTransitoryDataHandler:(id /* block */)arg1;
- (id /* block */)transitoryDataHandler;

@end
